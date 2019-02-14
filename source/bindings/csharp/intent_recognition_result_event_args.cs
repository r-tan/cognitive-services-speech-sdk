//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
using System;
using System.Globalization;
using static Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower;

namespace Microsoft.CognitiveServices.Speech.Intent
{
    /// <summary>
    /// Define payload of intent recognizing/recognized events.
    /// </summary>
    public class IntentRecognitionEventArgs : RecognitionEventArgs
    {
        internal IntentRecognitionEventArgs(IntPtr eventHandlePtr)
            : base(eventHandlePtr)
        {
            IntPtr result = IntPtr.Zero;
            ThrowIfFail(Internal.Recognizer.recognizer_recognition_event_get_result(eventHandle, out result));
            Result = new IntentRecognitionResult(result);
        }

        /// <summary>
        /// Represents the intent recognition result.
        /// </summary>
        public IntentRecognitionResult Result { get; }

        /// <summary>
        /// Returns a string that represents the session id and the intent recognition result event.
        /// </summary>
        /// <returns>A string that represents the intent recognition result event.</returns>
        public override string ToString()
        {
            return string.Format(CultureInfo.InvariantCulture, "SessionId:{0} ResultId:{1} Reason:{2} IntentId:<{3}> Recognized text:<{4}>.",
                SessionId, Result.ResultId, Result.Reason, Result.IntentId, Result.Text);
        }

    }

    /// <summary>
    /// Define payload of intent recognition canceled result events.
    /// </summary>
    public sealed class IntentRecognitionCanceledEventArgs : IntentRecognitionEventArgs
    {
        internal IntentRecognitionCanceledEventArgs(IntPtr eventHandlePtr)
            : base(eventHandlePtr)
        {
            var cancellation = CancellationDetails.FromResult(Result);
            Reason = cancellation.Reason;
            ErrorCode = cancellation.ErrorCode;
            ErrorDetails = cancellation.ErrorDetails;
        }

        /// <summary>
        /// The reason the result was canceled.
        /// </summary>
        public CancellationReason Reason { get; }

        /// <summary>
        /// The error code in case of an unsuccessful recognition (<see cref="Reason"/> is set to Error).
        /// If Reason is not Error, ErrorCode returns NoError.
        /// Added in version 1.1.0.
        /// </summary>
        public CancellationErrorCode ErrorCode { get; }

        /// <summary>
        /// The error message in case of an unsuccessful recognition (<see cref="Reason"/> is set to Error).
        /// </summary>
        public string ErrorDetails { get; }

        /// <summary>
        /// Returns a string that represents the session id and the intent recognition result event.
        /// </summary>
        /// <returns>A string that represents the intent recognition result event.</returns>
        public override string ToString()
        {
            return string.Format(CultureInfo.InvariantCulture,"SessionId:{0} ResultId:{1} CancellationReason:{2}. CancellationErrorCode:{3}", SessionId, Result.ResultId, Reason, ErrorCode);
        }
    }
}

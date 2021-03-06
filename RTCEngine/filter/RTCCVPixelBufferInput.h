//
//  RTCCVPixelBufferInput.h
//  RTCEngine
//
//  Created by xiang on 13/08/2018.
//  Copyright © 2018 RTCEngine. All rights reserved.
//

#import <Foundation/Foundation.h>

@import WebRTC;

@import GPUImage;

@interface RTCCVPixelBufferInput : GPUImageOutput

- (BOOL)processCVPixelBuffer:(CVPixelBufferRef)pixelBuffer rotation:(RTCVideoRotation)rotation;;

@end

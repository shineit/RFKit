#import "RFKit.h"
#import "RFMath.h"
#import <stdio.h>



CGPoint CGPointMid(CGPoint a, CGPoint b) {
	return CGPointMake((a.x+b.x)/2, (a.y+b.y)/2);
}

float CGPointDistance(CGPoint a, CGPoint b) {
	return (float)sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}

CGPoint CGPointAtLineRatio(CGPoint start, CGPoint end, CGFloat ratio) {
	return CGPointMake(start.x + (end.x-start.x)*ratio, start.y + (end.y-start.y)*ratio);
}

CGPoint CGPointOfRectCenter(CGRect a) {
	return CGPointMake(a.origin.x+a.size.width, a.origin.y+a.size.height);
}

CGSize CGSizeFromPoints(CGPoint start, CGPoint end) {
	return CGSizeMake(end.x-start.x, end.y-start.y);
}

CGSize CGSizeScaled(CGSize original, float scale) {
	return CGSizeMake(original.width*scale, original.height*scale);
}

CGRect CGRectScaled(CGRect original, float scale) {
	CGFloat mx = original.origin.x + original.size.width/2;
	CGFloat my = original.origin.y + original.size.width/2;
	CGFloat w = original.size.width*scale;
	CGFloat h = original.size.height*scale;
	return CGRectMake(mx, my, w, h);
}

CGAngle CGAngleFromPoints(CGPoint start, CGPoint end) {
	float t = atan2f(end.y-start.y, end.x-start.x);
	dout_float(CGAngleDegrees(t))
	return atan2f(end.y-start.y, end.x-start.x);
}

float CGAngleDegrees(CGAngle a) {
	return a/M_PI*180.f;
}
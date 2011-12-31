
#ifndef _DOUT_H_
#define _DOUT_H_

#pragma mark -
#pragma mark Debug output kit

#ifndef DEBUGOUT
	#define DEBUGOUT 1

	#define _dout(...)
	#define _douts(...)
	#define _douto(...)
	#define _dout_bool(...)
	#define _dout_rect(...)
	#define _doutf(...)
	#define _doutwork(...)

	#define DOUT_START if(DEBUGOUT){
	#define DOUT_END }
#endif

#if DEBUGOUT
	#define dout(format,...)		\
		if(DEBUGOUT){NSLog(format,##__VA_ARGS__);}

	#define douto(NSObject)	\
		if(DEBUGOUT){NSLog(@"%s = %@",#NSObject,NSObject);}

	#define dout_bool(boolVar)	\
		if(DEBUGOUT){NSLog(@"%s = %@",#boolVar,boolVar?@"YES":@"NO");}

	#define dout_rect(CGRect)	\
		if(DEBUGOUT){NSLog(@"%s = {%f, %f,%f, %f}",#CGRect, CGRect.origin.x, CGRect.origin.y, CGRect.size.width, CGRect.size.height);}

	#define douts(NSString)	\
		if(DEBUGOUT){NSLog(@"%@",NSString);}

	#define doutwork()		\
		if(DEBUGOUT){NSLog(@"%s: It Works!",__FUNCTION__);}

//#define doutf(s,...)	\
//	if(DEBUGOUT){NSLog(@"%@",[[NSString stringWithFormat:@"%s %s %d: ",__FUNCTION__,__FILE__,__LINE__] stringByAppendingFormat:s,...])}
#else
	#define dout(...)
	#define douts(...)
	#define douto(...)
	#define dout_bool(...)
	#define dout_rect(...)
	#define doutf(...)
	#define doutwork(...)
#endif

#endif
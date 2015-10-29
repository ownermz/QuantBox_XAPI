﻿#pragma once

#ifndef _TDX_STRUCT_H_
#define _TDX_STRUCT_H_


// 字段信息,通达信内部定义的，非自定义
struct FieldInfo_STRUCT
{
	short FieldID;		// 字段ID
	char a;				// 只有a和1两种情况
	char b;				// 怎么一直都是2？
	char Len;			// 好像目前看到最大的是32
	char d;
	char e;
	char FieldName[25];	// 字段名字
};

// 错误
struct Error_STRUCT
{
	int ErrType;
	int ErrCode;
	char ErrInfo[256];
};

struct Order_STRUCT
{
	char ZJZH[32];	// 121_资金帐号
	char GDDM[32];	// 123_股东代码
	char ZQDM[32];	// 140_证券代码
	int ZHLB;		// 125_帐号类别
	int RZRQBS;		// 281_融资融券标识
	double Price;	// 145_委托价格
	long Qty;		// 144_委托数量
	long MMBZ;		// 130_买卖标志
	long WTFS;		// 166_委托方式

	char ZHLB_[2];	// 125_帐号类别
	// 下完单后用来回填
	char WTBH[32];	// 146_委托编号
};

// 股东列表
struct GDLB_STRUCT
{
	char GDDM[32];	// 123_股东代码
	char GDMC[32];	// 124_股东名称
	char ZJZH[32];	// 121_资金帐号
	char ZHLB[32];	// 125_帐号类别
	char RZRQBS[32];	// 281_融资融券标识
	char BLXX[32];	// 1213_保留信息

	int ZHLB_;		// 125_帐号类别
	int RZRQBS_;	// 281_融资融券标识
};

// 当日委托/历史委托=委托列表
struct WTLB_STRUCT
{
	char WTRQ[32];	// 142_委托日期
	char WTSJ[32];	// 143_委托时间
	char GDDM[32];  // 123_股东代码
	char ZQDM[32];  // 140_证券代码
	char ZQMC[32];  // 141_证券名称
	char MMBZ[32];  // 130_买卖标志
	char WTLB[32];  // 131_委托类别
	char JYSDM[32];	// 100_交易所代码
	char WTJG[32];  // 145_委托价格
	char WTSL[32];  // 144_委托数量
	char CJJG[32];  // 153_成交价格
	char CJSL[32];  // 152_成交数量
	char CDSL[32];  // 162_撤单数量
	char WTBH[32];  // 146_委托编号
	char BJFS[32];  // 194_报价方式
	char ZTSM[32];  // 147_状态说明
	char DJZJ[32];  // 161_冻结资金
	char BLXX[32];	// 1213_保留信息

	int WTRQ_;
	int WTSJ_;
	char MMBZ_;
	char JYSDM_;
	double WTJG_;
	int WTSL_;
	double CJJG_;
	int CJSL_;
	int CDSL_;
	double DJZJ_;
	int ZTSM_;
};

struct CJLB_STRUCT
{
	char CJRQ[32];	// 150_成交日期
	char CJSJ[32];	// 151_成交时间
	char GDDM[32];	// 123_股东代码
	char ZQDM[32];	// 140_证券代码
	char ZQMC[32];	// 141_证券名称
	char MMBZ[32];	// 130_买卖标志
	char WTLB[32];	// 131_委托类别
	char CJJG[32];	// 153_成交价格
	char CJSL[32];	// 152_成交数量
	char FSJE[32];	// 303_发生金额
	char SYJE[32];	// 304_剩余金额
	char YJ[32];	// 206_佣金
	char YHS[32];	// 210_印花税
	char GHF[32];	// 207_过户费
	char CJF[32];	// 208_成交费
	char CJBH[32];	// 155_成交编号
	char CDBZ[32];	// 167_撤单标志
	char WTBH[32];	// 146_委托编号

	int CJRQ_;
	int CJSJ_;
	char MMBZ_;
	char WTLB_;
	double CJJG_;
	int CJSL_;
	double FSJE_;
	double SYJE_;
	double YJ_;
	double YHS_;
	double GHF_;
	double CJF_;
	char CDBZ_;
};


//
////////////////////////////////////////////////////////////////////////////
//// 以下的在整理完后要删除
//

//
//// 股份列表
//struct GFLB_STRUCT
//{
//	char ZQDM[64];  // 证券代码
//	char ZQMC[64];  // 证券名称
//	char ZQSL[64];  // 证券数量
//	char KMSL[64];  // 可卖数量
//	char TBCBJ[64];  // 摊薄成本价
//	char DQJ[64];  // 当前价
//	char ZXSZ[64];  // 最新市值
//	char TBFDYK[64];  // 摊薄浮动盈亏
//	char SXYK[64];  // 实现盈亏
//	char CKYKBL[64];  // 参考盈亏比例
//	char DJSL[64];  // 冻结数量
//	char GDDM[64];  // 股东代码
//	char SCLB[64]; // 市场类别
//	char JYSMC[64];  // 交易所名称
//
//	int ZQSL_;
//	int KMSL_;
//	double TBCBJ_;
//};
//
//// 资金余额
//struct ZJYE_STRUCT
//{
//	char HBLX[64];		// 货币类型
//	char ZJYE[64];		// 资金余额
//	char KYZJ[64];		// 可用资金
//	char KQZJ[64];		// 可取资金
//	char ZC[64];		// 资产
//
//	double CKSZ_;		// 参考市值
//	double YK_;			// 盈亏
//
//	double ZJYE_;
//	double KYZJ_;
//	double KQZJ_;
//	double ZC_;
//};
//
//
//
//// 委托结果
//struct WTJG_STRUCT
//{
//	char WTBH[64];	// 委托编号
//
//	// 返回的结果中没有，这里自己填上，这样就可以立即撤单，而不用等查询了
//	char GDDM[64];  // 股东代码
//};

// 登录结果
struct DLJG_STRUCT
{
	char COL1[128];
	char COL2[128];
	char COL3[128];
};

#endif



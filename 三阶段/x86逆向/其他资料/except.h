struct FuncInfo
{
  int magicNumber;
  int maxState;
  int pUnwindMap;
  int dwTryCount;
  int pTryBlockMap;
};

struct TryBlockMapEntry
{
  int tryLow;
  int tryHigh;
  int catchHigh;
  int dwCatchCount;
  int *pCatchHandlerArray;
};

struct _msRttiDscr
{
  int nFlag;
  int *pType;
  int dispCatchObjOffset;
  int *CatchProc;
};

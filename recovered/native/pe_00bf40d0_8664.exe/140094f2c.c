/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140094f2c */

/* Library Function - Single Match
    public: __cdecl <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()(void)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
<lambda_2a444430fde8c29194d880d93eed5e8f>::operator()
          (<lambda_2a444430fde8c29194d880d93eed5e8f> *this)

{
  LPVOID pvVar1;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  pvVar1 = _calloc_base(1,0x158);
  **(undefined8 **)this = pvVar1;
  FUN_1400a1290((LPVOID)0x0);
  if (pvVar1 != (LPVOID)0x0) {
    local_38 = *(undefined8 *)this;
    local_30 = *(undefined8 *)(this + 8);
    local_28 = *(undefined8 *)(this + 0x10);
    local_20 = *(undefined8 *)(this + 0x18);
    local_18 = *(undefined8 *)(this + 0x20);
    local_res10[0] = 4;
    local_res18[0] = 4;
    FUN_140095564(local_res8,local_res18,&local_38,local_res10);
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404931a0 */

/* Library Function - Single Match
    public: __cdecl <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()(void)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
<lambda_2a444430fde8c29194d880d93eed5e8f>::operator()
          (<lambda_2a444430fde8c29194d880d93eed5e8f> *this)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar1 = _calloc_base(1,0x158);
  **(longlong **)this = lVar1;
  FUN_1404a2310(0);
  if (lVar1 != 0) {
    local_38 = *(undefined8 *)this;
    local_30 = *(undefined8 *)(this + 8);
    local_28 = *(undefined8 *)(this + 0x10);
    local_20 = *(undefined8 *)(this + 0x18);
    local_18 = *(undefined8 *)(this + 0x20);
    local_res10[0] = 4;
    local_res18[0] = 4;
    FUN_1404937d8(local_res8,local_res18,&local_38,local_res10);
  }
  return;
}


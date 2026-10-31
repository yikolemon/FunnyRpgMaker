/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004900b0 */

undefined4 __cdecl FUN_004900b0(int param_1)

{
  undefined4 uVar1;
  __acrt_ptd *p_Var2;
  
  uVar1 = DAT_00521aa8;
  if ((param_1 != 0) && (param_1 != 1)) {
    p_Var2 = FUN_0048f66d();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_00495c88();
    return 0xffffffff;
  }
  LOCK();
  DAT_00521aa8 = param_1;
  UNLOCK();
  return uVar1;
}


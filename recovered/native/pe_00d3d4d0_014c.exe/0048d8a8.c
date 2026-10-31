/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048d8a8 */

int __cdecl FUN_0048d8a8(int param_1)

{
  uint uVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  uint uVar4;
  
  iVar2 = FUN_004961ad();
  uVar1 = *(uint *)(iVar2 + 0x350);
  if (param_1 == -1) {
    DAT_0051b640 = 0xffffffff;
  }
  else if (param_1 != 0) {
    if (param_1 == 1) {
      uVar4 = uVar1 | 2;
    }
    else {
      if (param_1 != 2) {
        p_Var3 = FUN_0048f66d();
        *(undefined4 *)p_Var3 = 0x16;
        FUN_00495c88();
        return -1;
      }
      uVar4 = uVar1 & 0xfffffffd;
    }
    *(uint *)(iVar2 + 0x350) = uVar4;
  }
  return ((uVar1 & 2) == 0) + 1;
}


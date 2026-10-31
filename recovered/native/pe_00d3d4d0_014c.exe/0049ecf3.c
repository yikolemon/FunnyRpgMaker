/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049ecf3 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_0049ecf3(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_14;
  
  FUN_0049d70b(*param_1);
  uVar1 = *(uint *)*param_2;
  iVar2 = param_2[1];
  if ((*(byte *)((&DAT_00521cc8)[(int)uVar1 >> 6] + 0x28 + (uVar1 & 0x3f) * 0x38) & 1) == 0) {
    *(undefined1 *)(iVar2 + 0x1c) = 1;
    *(undefined4 *)(iVar2 + 0x18) = 9;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_0049ebb0(uVar1,iVar2);
  }
  FUN_0049ed78();
  ExceptionList = local_14;
  return uVar3;
}


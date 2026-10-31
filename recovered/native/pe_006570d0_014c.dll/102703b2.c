/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102703b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_102703b2(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = *(uint *)*param_1 & 0xfffffffe;
  FUN_1026d759(*(undefined4 *)param_1[1],param_1[2]);
  ___acrt_stdio_free_buffer_nolock(*(undefined4 *)param_1[1]);
  LOCK();
  *(uint *)(*(int *)param_1[1] + 0xc) = *(uint *)(*(int *)param_1[1] + 0xc) & 0xfffff81f;
  UNLOCK();
  if ((*(byte *)param_1[3] & 4) == 0) {
    iVar1 = *(int *)param_1[4];
    if (iVar1 == 0) {
      iVar1 = FUN_10275d90(uVar2,1);
      FUN_10274120(0);
      if (iVar1 == 0) {
        _DAT_103a4d50 = _DAT_103a4d50 + 1;
        return -1;
      }
      uVar4 = 0x140;
    }
    else {
      uVar4 = 0x180;
    }
    iVar3 = *(int *)param_1[1];
  }
  else {
    uVar4 = 0x400;
    uVar2 = 2;
    iVar3 = *(int *)param_1[1];
    iVar1 = iVar3 + 0x14;
  }
  iVar1 = set_buffer(iVar3,iVar1,uVar2,uVar4);
  return iVar1;
}


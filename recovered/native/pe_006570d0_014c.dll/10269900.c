/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10269900 */

undefined4 FUN_10269900(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_103a4e88 != 0) {
    return 0;
  }
  ___acrt_initialize_multibyte();
  iVar1 = FUN_10279e17();
  if (iVar1 == 0) {
    FUN_10274120(0);
    return 0xffffffff;
  }
  iVar2 = FUN_10269a40(iVar1);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    DAT_103a4e88 = iVar2;
    DAT_103a4e94 = iVar2;
  }
  FUN_10274120(0);
  FUN_10274120(iVar1);
  return uVar3;
}


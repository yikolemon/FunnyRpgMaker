/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fd857 */

void FUN_100fd857(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,
                 undefined4 param_5)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  local_1c = param_1;
  local_18 = param_2;
  if (param_4 == (char *)0x0) {
    sVar2 = _strlen(param_3);
    param_4 = param_3 + sVar2;
  }
  if (param_3 != param_4) {
    uVar3 = FUN_100fcb39(0,0x3f800000);
    FUN_1018c69a(*(undefined4 *)(iVar1 + 0x1220),*(undefined4 *)(iVar1 + 0x1228),&local_1c,uVar3,
                 param_3,param_4,param_5,0);
    if (*(char *)(iVar1 + 0x2748) == '\x01') {
      FUN_100fd6a8(&local_1c,param_3,param_4);
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


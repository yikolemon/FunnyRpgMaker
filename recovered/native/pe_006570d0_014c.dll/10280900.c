/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10280900 */

void FUN_10280900(uint param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 local_90 [48];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  uVar4 = param_6;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffff0;
  iVar2 = FUN_10280aa0(param_1,&param_5,param_6);
  if (iVar2 == 0) {
    local_50 = local_50 & 0xffffffe3 | 3;
    local_60 = param_4;
    FUN_10280f00(local_90,&param_6,param_1,param_2,&param_3,&param_5,0);
    uVar4 = param_6;
  }
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 4) == 0) {
        if ((param_1 & 1) == 0) {
          iVar2 = (param_1 & 2) * 2;
        }
        else {
          iVar2 = 3;
        }
      }
      else {
        iVar2 = 2;
      }
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 5;
  }
  cVar1 = FUN_102771a0();
  if (cVar1 == '\0') {
    if (iVar2 == 1) {
      puVar3 = (undefined4 *)FUN_10268ffd();
      *puVar3 = 0x21;
    }
    else if ((iVar2 == 2) || (iVar2 == 3)) {
      puVar3 = (undefined4 *)FUN_10268ffd();
      *puVar3 = 0x22;
    }
  }
  else if (iVar2 != 0) {
    FUN_10280e00(iVar2,param_2,param_3,param_4,param_5,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  FUN_10281250();
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


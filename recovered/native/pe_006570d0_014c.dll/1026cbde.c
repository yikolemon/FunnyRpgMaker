/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026cbde */

void FUN_1026cbde(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_314 [780];
  uint local_8;
  
  iVar1 = param_4;
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if ((param_4 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
  }
  else {
    uVar3 = FUN_1026ccde(param_1,&param_2,local_314);
    FUN_102678c0(uVar3,local_314,iVar1);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


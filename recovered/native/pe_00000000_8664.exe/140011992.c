/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140011992 */

undefined8 FUN_140011992(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_98 [56];
  undefined1 local_60 [32];
  ulonglong local_40 [4];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_60[0] = 2;
  local_40[0] = FUN_140011b1e();
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  if (puVar1 == *(ulonglong **)(param_1 + 0x18)) {
    FUN_14000d3b4(param_1 + 8,puVar1,local_40);
  }
  else {
    *puVar1 = local_40[0];
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 8;
  }
  if (param_2 != 0xffffffffffffffff) {
    pbVar2 = *(byte **)(*(longlong *)(param_1 + 0x10) + -8);
    uVar3 = (ulonglong)*pbVar2;
    uVar4 = 1;
    if (uVar3 < 3) {
      uVar4 = *(ulonglong *)(&DAT_1401c84b8 + uVar3 * 8);
    }
    if (uVar4 < param_2) {
      FUN_14000d637(local_60,param_2);
      FUN_14000d16a(local_40,"excessive array size: ",local_60);
      FUN_14000cb10(local_98,0x198,local_40,pbVar2);
                    /* WARNING: Subroutine does not return */
      FUN_14018f0a0(local_98,&DAT_140ee3ab0);
    }
  }
  return 1;
}


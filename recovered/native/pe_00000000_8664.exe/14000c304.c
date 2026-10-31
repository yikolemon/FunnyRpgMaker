/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000c304 */

undefined8 FUN_14000c304(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_b8 [56];
  undefined1 local_80 [32];
  longlong local_60;
  ulonglong local_58;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_29 = FUN_14000ce02(param_1 + 0x70,
                           (ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8))
                           >> 3,0,param_1 + 0xb8);
  uVar3 = *(ulonglong *)(param_1 + 0x38);
  local_60 = ((longlong)uVar3 >> 0x3f & 0xe000000000000000U) +
             (uVar3 >> 5) * 4 + *(longlong *)(param_1 + 0x20);
  local_58 = (ulonglong)((uint)uVar3 & 0x1f);
  FUN_14000bc34(param_1 + 0x20,local_80,&local_60,1,&local_29);
  local_60 = CONCAT71(local_60._1_7_,1);
  FUN_14000ce64(param_1,local_40,&local_60,1);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 0x18)) {
    FUN_14000d3b4(param_1 + 8,puVar1,&local_38);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  else {
    *puVar1 = local_38;
    uVar3 = *(longlong *)(param_1 + 0x10) + 8;
    *(ulonglong *)(param_1 + 0x10) = uVar3;
  }
  if ((param_2 != 0xffffffffffffffff) && (pbVar2 = *(byte **)(uVar3 - 8), pbVar2 != (byte *)0x0)) {
    uVar3 = (ulonglong)*pbVar2;
    uVar4 = 1;
    if (uVar3 < 3) {
      uVar4 = *(ulonglong *)(&DAT_1401c84b8 + uVar3 * 8);
    }
    if (uVar4 < param_2) {
      FUN_14000d637(local_80,param_2);
      FUN_14000d16a(&local_60,"excessive object size: ",local_80);
      FUN_14000cb10(local_b8,0x198,&local_60,pbVar2);
                    /* WARNING: Subroutine does not return */
      FUN_14018f0a0(local_b8,&DAT_140ee3ab0);
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}


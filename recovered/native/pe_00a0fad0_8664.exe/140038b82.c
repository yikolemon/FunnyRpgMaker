/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140038b82 */

void FUN_140038b82(longlong param_1,byte param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [64];
  undefined1 local_68 [64];
  ulonglong local_28;
  
  uVar5 = (undefined4)param_3;
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(param_1 + 0x210);
  lVar2 = *(longlong *)(param_1 + 0x218);
  if (lVar1 != 0) {
    param_2 = param_2 | *(longlong *)(lVar1 + 0x240) != *(longlong *)(lVar1 + 0x238);
  }
  if (lVar2 != 0) {
    uVar5 = (undefined4)
            CONCAT71((int7)((param_3 & 0xffffffff) >> 8),
                     (byte)(param_3 & 0xffffffff) |
                     *(longlong *)(lVar2 + 0x240) != *(longlong *)(lVar2 + 0x238));
  }
  puVar7 = *(undefined8 **)(param_1 + 0x2a8);
  puVar3 = *(undefined8 **)(param_1 + 0x2b0);
  if (puVar7 == puVar3) {
    if ((char)uVar5 == '\0') {
      if (param_2 == 0) goto LAB_140038c18;
      puVar6 = local_a8;
      FUN_14003ad04(puVar6);
      puVar4 = &DAT_14017a690;
    }
    else {
      puVar6 = local_68;
      FUN_14003aac6(puVar6);
      puVar4 = &DAT_14017a640;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140106270(puVar6,puVar4);
  }
  do {
    FUN_140038b82(*puVar7,param_2,uVar5);
    puVar7 = puVar7 + 1;
  } while (puVar7 != puVar3);
LAB_140038c18:
  if (DAT_1401c9640 != (local_28 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_28 ^ (ulonglong)auStack_c8);
  }
  return;
}


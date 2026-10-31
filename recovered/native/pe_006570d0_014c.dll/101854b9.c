/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101854b9 */

void __fastcall
FUN_101854b9(int param_1,uint param_2,uint param_3,undefined4 *param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_24 = param_5;
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  local_28 = param_3 - 1;
  uVar3 = (int)local_28 >> 1;
  local_2c = param_2;
  if ((int)param_2 < (int)uVar3) {
    do {
      local_20 = uVar3;
      local_1c = param_2 * 2 + 2;
      puVar1 = (undefined4 *)(param_1 + 4 + param_2 * 8);
      cVar2 = FUN_1018545a(puVar1);
      puVar4 = (undefined4 *)(param_1 + param_2 * 8 + 8);
      if (cVar2 != '\0') {
        puVar4 = puVar1;
      }
      *(undefined4 *)(param_1 + param_2 * 4) = *puVar4;
      param_2 = param_2 * 2 + 1;
      if (cVar2 == '\0') {
        param_2 = local_1c;
      }
      uVar3 = local_20;
    } while ((int)param_2 < (int)local_20);
  }
  if (((param_3 & 1) == 0) && (param_2 == uVar3)) {
    *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    param_2 = local_28;
  }
  local_18 = local_24;
  if ((int)local_2c < (int)param_2) {
    do {
      uVar3 = param_2 - 1 >> 1;
      cVar2 = FUN_1018545a(param_4);
      if (cVar2 == '\0') break;
      *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + uVar3 * 4);
      param_2 = uVar3;
    } while (local_2c < uVar3);
  }
  *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}


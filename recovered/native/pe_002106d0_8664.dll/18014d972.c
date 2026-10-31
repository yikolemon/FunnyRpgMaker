/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014d972 */

undefined4 FUN_18014d972(undefined8 param_1,char *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0 [20];
  ulonglong local_60;
  
  lVar7 = DAT_180419160;
  local_60 = DAT_180402640 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar7 + 0x1608) + 0x10e) == '\0') {
    if (param_2 == (char *)0x0) {
      uVar8 = 0x1a;
    }
    else {
      uVar8 = 0x1000001e;
      if (*param_2 != '\x01') goto LAB_18014d9df;
    }
    uVar4 = FUN_180106d4e(*(longlong *)(lVar7 + 0x1608),param_1,0);
    uVar5 = FUN_18014c31f(uVar4,uVar8 | param_3,param_1,0);
    lVar7 = DAT_180419160;
    if (param_2 != (char *)0x0) {
      puVar11 = (undefined4 *)(DAT_180419160 + 0x1fe0);
      puVar9 = puVar11;
      puVar10 = local_b0;
      for (lVar6 = 0x14; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      uVar12 = FUN_180102463(*(undefined4 *)(DAT_180419160 + 0x1fec),
                             (*(float *)(DAT_180419160 + 0x1ff4) - *(float *)(DAT_180419160 + 0xdf4)
                             ) - *(float *)(DAT_180419160 + 0x1320));
      fVar1 = *(float *)(lVar7 + 0x1ff0);
      fVar2 = *(float *)(lVar7 + 0xdf8);
      uVar4 = FUN_18011828d("#CLOSE",0,uVar4);
      local_b8 = uVar12;
      local_b4 = fVar1 + fVar2;
      cVar3 = FUN_180134687(uVar4);
      if (cVar3 != '\0') {
        *param_2 = '\0';
      }
      puVar9 = local_b0;
      for (lVar7 = 0x14; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
    }
  }
  else {
LAB_18014d9df:
    uVar5 = 0;
  }
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_d8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_d8);
}


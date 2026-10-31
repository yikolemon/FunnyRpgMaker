/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180069195 */

undefined8 *
FUN_180069195(undefined8 *param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  longlong local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (((param_2 == 0) ||
      (lVar6 = *(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 3,
      (*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x20) >> 3) * 0x6db6db6db6db6db7 +
      lVar6 * -0x21cfb2b78c13521d != 0)) || ((ulonglong)(lVar6 * 0x21cfb2b78c13521d) <= param_3)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    local_48 = param_3;
    local_40 = param_2;
    FUN_18006719a(param_4,&local_58,&local_40,&local_48);
    if (local_50 == '\0') {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      lVar6 = *(longlong *)(local_40 + 0x20);
      iVar1 = *(int *)(lVar6 + 0x34 + local_48 * 0x38);
      local_38 = param_1;
      if (iVar1 == 2) {
        FUN_180069195(param_1,local_40,local_48 - 1,param_4);
        param_1 = local_38;
      }
      else if (iVar1 == 1) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        lVar6 = lVar6 + local_48 * 0x38;
        lVar2 = *(longlong *)(lVar6 + 0x20);
        for (lVar6 = *(longlong *)(lVar6 + 0x18); param_1 = local_38, lVar6 != lVar2;
            lVar6 = lVar6 + 0x48) {
          puVar9 = *(undefined8 **)(lVar6 + 0x18);
          puVar8 = (undefined8 *)&DAT_1803861e4;
          if ((puVar9 != *(undefined8 **)(lVar6 + 0x20)) &&
             (puVar8 = puVar9, 0xf < (ulonglong)puVar9[3])) {
            puVar8 = (undefined8 *)*puVar9;
          }
          local_58 = FUN_180061ed8(puVar8);
          puVar9 = (undefined8 *)local_38[1];
          if (puVar9 == (undefined8 *)local_38[2]) {
            FUN_180052bde(local_38,puVar9,&local_58);
          }
          else {
            *puVar9 = local_58;
            local_38[1] = local_38[1] + 8;
          }
        }
      }
      else if (iVar1 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        puVar8 = *(undefined8 **)(*(longlong *)(local_40 + 0x38) + 0xa8 + local_48 * 0x1a8);
        for (puVar9 = *(undefined8 **)(*(longlong *)(local_40 + 0x38) + 0xa0 + local_48 * 0x1a8);
            param_1 = local_38, puVar9 != puVar8; puVar9 = puVar9 + 4) {
          puVar7 = puVar9;
          if (0xf < (ulonglong)puVar9[3]) {
            puVar7 = (undefined8 *)*puVar9;
          }
          local_58 = FUN_180061ed8(puVar7);
          puVar7 = (undefined8 *)local_38[1];
          if (puVar7 == (undefined8 *)local_38[2]) {
            FUN_180052bde(local_38,puVar7,&local_58);
          }
          else {
            *puVar7 = local_58;
            local_38[1] = local_38[1] + 8;
          }
        }
      }
      else {
        iVar4 = iVar1 >> 0x1f;
        iVar3 = iVar1 / 10000 + iVar4;
        uVar5 = FUN_180061eb4((iVar3 - iVar4) + -1);
        FUN_180069195(param_1,uVar5,(longlong)(iVar1 + (iVar3 - iVar4) * -10000),param_4);
        param_1 = local_38;
      }
    }
  }
  return param_1;
}


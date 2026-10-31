/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180069c76 */

undefined8 *
FUN_180069c76(undefined8 *param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  longlong local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (((param_2 == 0) ||
      (lVar7 = *(longlong *)(param_2 + 0x50) - *(longlong *)(param_2 + 0x48) >> 4,
      (*(longlong *)(param_2 + 0x30) - *(longlong *)(param_2 + 0x28) >> 3) * -0x71c71c71c71c71c7 +
      lVar7 * 0x79435e50d79435e5 != 0)) || ((ulonglong)(lVar7 * -0x79435e50d79435e5) <= param_3)) {
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
      lVar7 = *(longlong *)(local_40 + 0x28);
      iVar1 = *(int *)(lVar7 + 0x44 + local_48 * 0x48);
      local_38 = param_1;
      if (iVar1 == 2) {
        FUN_180069c76(param_1,local_40,local_48 - 1,param_4);
        param_1 = local_38;
      }
      else if (iVar1 == 1) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        lVar7 = lVar7 + local_48 * 0x48;
        lVar2 = *(longlong *)(lVar7 + 0x30);
        for (lVar7 = *(longlong *)(lVar7 + 0x28); param_1 = local_38, lVar7 != lVar2;
            lVar7 = lVar7 + 0x40) {
          lVar8 = *(longlong *)(lVar7 + 0x28);
          puVar9 = &DAT_1803861e4;
          if (lVar8 != *(longlong *)(lVar7 + 0x30)) {
            if (*(ulonglong *)(lVar8 + 0x20) < 0x10) {
              puVar9 = (undefined1 *)(lVar8 + 8);
            }
            else {
              puVar9 = *(undefined1 **)(lVar8 + 8);
            }
          }
          local_58 = FUN_180061ed8(puVar9);
          puVar3 = (undefined8 *)local_38[1];
          if (puVar3 == (undefined8 *)local_38[2]) {
            FUN_180052bde(local_38,puVar3,&local_58);
          }
          else {
            *puVar3 = local_58;
            local_38[1] = local_38[1] + 8;
          }
        }
      }
      else if (iVar1 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        lVar2 = *(longlong *)(*(longlong *)(local_40 + 0x48) + 0x60 + local_48 * 0x130);
        for (lVar7 = *(longlong *)(*(longlong *)(local_40 + 0x48) + 0x58 + local_48 * 0x130);
            param_1 = local_38, lVar7 != lVar2; lVar7 = lVar7 + 0x28) {
          if (*(ulonglong *)(lVar7 + 0x20) < 0x10) {
            lVar8 = lVar7 + 8;
          }
          else {
            lVar8 = *(longlong *)(lVar7 + 8);
          }
          local_58 = FUN_180061ed8(lVar8);
          puVar3 = (undefined8 *)local_38[1];
          if (puVar3 == (undefined8 *)local_38[2]) {
            FUN_180052bde(local_38,puVar3,&local_58);
          }
          else {
            *puVar3 = local_58;
            local_38[1] = local_38[1] + 8;
          }
        }
      }
      else {
        iVar5 = iVar1 >> 0x1f;
        iVar4 = iVar1 / 10000 + iVar5;
        uVar6 = FUN_180061eb4((iVar4 - iVar5) + -1);
        FUN_180069c76(param_1,uVar6,(longlong)(iVar1 + (iVar4 - iVar5) * -10000),param_4);
        param_1 = local_38;
      }
    }
  }
  return param_1;
}


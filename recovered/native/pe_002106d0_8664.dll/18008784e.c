/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008784e */

undefined1 * FUN_18008784e(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,char param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar8;
  uint uVar9;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong uVar7;
  
  local_30 = 0xfffffffffffffffe;
  uVar4 = param_1[7];
  uVar6 = (uint)uVar4 & 0x1f;
  uVar7 = (ulonglong)uVar6;
  uVar9 = 0x80000000;
  if (uVar7 != 0) {
    uVar9 = 1 << ((char)uVar6 - 1U & 0x1f);
  }
  lVar8 = (uVar4 >> 5) * 4 + param_1[4];
  uVar4 = (longlong)uVar4 >> 0x3f & 0xe000000000000000;
  puVar5 = (uint *)(lVar8 + uVar4 + (uVar7 - 1 >> 5) * 4);
  if (uVar7 == 0) {
    puVar5 = (uint *)((uVar4 - 4) + lVar8);
  }
  if ((*puVar5 & uVar9) != 0) {
    FUN_180081b9a(&local_40,*param_3);
    if ((param_4 == '\0') &&
       (cVar3 = FUN_18005262c(param_1 + 0xe,(ulonglong)(param_1[2] - param_1[1]) >> 3,5,&local_40),
       cVar3 == '\0')) {
      *param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
    }
    else if (param_1[1] == param_1[2]) {
      local_68 = local_40;
      uStack_64 = uStack_3c;
      uStack_60 = (undefined4)uStack_38;
      uStack_5c = uStack_38._4_4_;
      local_40 = local_40 & 0xffffff00;
      uStack_38 = 0;
      FUN_1800856c4(*param_1,&local_68);
      uVar2 = *param_1;
      *param_2 = 1;
      *(undefined8 *)(param_2 + 8) = uVar2;
    }
    else {
      pcVar1 = *(char **)(param_1[2] + -8);
      if (pcVar1 == (char *)0x0) {
        *param_2 = 0;
        *(undefined8 *)(param_2 + 8) = 0;
      }
      else if (*pcVar1 == '\x02') {
        FUN_180080f7e(*(undefined8 *)(pcVar1 + 8),&local_40);
        lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8);
        *param_2 = 1;
        *(longlong *)(param_2 + 8) = lVar8 + -0x10;
      }
      else {
        uVar4 = param_1[0xb];
        uVar6 = (uint)uVar4 & 0x1f;
        uVar7 = (ulonglong)uVar6;
        uVar9 = 0x80000000;
        if (uVar7 != 0) {
          uVar9 = 1 << ((char)uVar6 - 1U & 0x1f);
        }
        lVar8 = (uVar4 >> 5) * 4 + param_1[8];
        uVar4 = (longlong)uVar4 >> 0x3f & 0xe000000000000000;
        puVar5 = (uint *)(lVar8 + uVar4 + (uVar7 - 1 >> 5) * 4);
        if (uVar7 == 0) {
          puVar5 = (uint *)((uVar4 - 4) + lVar8);
        }
        uVar6 = *puVar5;
        FUN_18005258c(param_1 + 8);
        if ((uVar6 & uVar9) == 0) {
          *param_2 = 0;
          *(undefined8 *)(param_2 + 8) = 0;
        }
        else {
          local_58 = local_40;
          uStack_54 = uStack_3c;
          uStack_50 = (undefined4)uStack_38;
          uStack_4c = uStack_38._4_4_;
          local_40 = local_40 & 0xffffff00;
          uStack_38 = 0;
          FUN_1800856c4(param_1[0xc],&local_58);
          *param_2 = 1;
          *(undefined8 *)(param_2 + 8) = param_1[0xc];
        }
      }
    }
    FUN_18007ff6e(&local_40);
    return param_2;
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  return param_2;
}


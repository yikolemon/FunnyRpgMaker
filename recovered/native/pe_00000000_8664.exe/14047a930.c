/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14047a930 */

void FUN_14047a930(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  char *pcVar15;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 local_48 [48];
  
  puVar10 = (undefined4 *)FUN_14044e840(local_48);
  uVar3 = puVar10[1];
  uVar4 = puVar10[2];
  uVar5 = puVar10[3];
  uVar12 = *(undefined8 *)(puVar10 + 4);
  uVar6 = puVar10[7];
  uVar7 = puVar10[8];
  uVar8 = puVar10[9];
  uVar9 = puVar10[10];
  uStack_60 = (undefined4)*(undefined8 *)(puVar10 + 6);
  *(undefined4 *)(param_1 + 0x48) = *puVar10;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  local_68 = (undefined4)uVar12;
  uStack_64 = (undefined4)((ulonglong)uVar12 >> 0x20);
  *(undefined4 *)(param_1 + 0x58) = local_68;
  *(undefined4 *)(param_1 + 0x5c) = uStack_64;
  *(undefined4 *)(param_1 + 0x60) = uStack_60;
  *(undefined4 *)(param_1 + 100) = uVar6;
  *(undefined4 *)(param_1 + 100) = uVar6;
  *(undefined4 *)(param_1 + 0x68) = uVar7;
  *(undefined4 *)(param_1 + 0x6c) = uVar8;
  *(undefined4 *)(param_1 + 0x70) = uVar9;
  lVar11 = FUN_140498a30();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar12 = FUN_14021e8f0(*(undefined8 *)(lVar11 + 0x38),param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x10) = uVar12;
  lVar13 = 0x18;
  if (*(char *)(param_1 + 0x44) == '\0') {
    lVar13 = 0x20;
  }
  uVar12 = FUN_14021e8f0(*(undefined8 *)(lVar13 + lVar11),param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x20) = uVar12;
  pwVar14 = L"pNonPic";
  if (*(byte *)(lVar11 + 0x56) < 5) {
    pwVar14 = *(wchar_t **)(lVar11 + 0x40);
  }
  uVar12 = FUN_14021e8f0(pwVar14,param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x28) = uVar12;
  pcVar15 = "thod";
  if (*(byte *)(lVar11 + 0x57) < 5) {
    pcVar15 = *(char **)(lVar11 + 0x48);
  }
  uVar12 = FUN_14021e8f0(pcVar15,param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x30) = uVar12;
  *(undefined1 *)(param_1 + 0x18) = **(undefined1 **)(lVar11 + 0x28);
  *(undefined1 *)(param_1 + 0x19) = **(undefined1 **)(lVar11 + 0x30);
  cVar1 = *(char *)(param_1 + 0x44);
  bVar2 = *(byte *)((0x51 - (ulonglong)(cVar1 != '\0')) + lVar11);
  *(int *)(param_1 + 0x38) = (int)(char)bVar2;
  if (0x7e < bVar2) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if ((((cVar1 == '\0') && ((uint)(int)*(char *)(lVar11 + 0x53) < 3)) &&
      ((uint)(int)*(char *)(lVar11 + 0x52) < 2)) && ((uint)(int)*(char *)(lVar11 + 0x56) < 5)) {
    *(undefined4 *)(param_1 + 0x3c) =
         *(undefined4 *)
          ((longlong)L"ext-ms-win-ntuser-windowstation-l1-1-0" +
          (ulonglong)
          (uint)(((int)*(char *)(lVar11 + 0x56) +
                 ((int)*(char *)(lVar11 + 0x52) + *(char *)(lVar11 + 0x53) * 2) * 5) * 4) + 0x40);
LAB_14047aa8a:
    if ((((uint)(int)*(char *)(lVar11 + 0x55) < 3) && ((uint)(int)*(char *)(lVar11 + 0x54) < 2)) &&
       ((uint)(int)*(char *)(lVar11 + 0x57) < 5)) {
      pcVar15 = (char *)((longlong)L"ext-ms-win-ntuser-windowstation-l1-1-0" +
                        (ulonglong)
                        (uint)(((int)*(char *)(lVar11 + 0x57) +
                               ((int)*(char *)(lVar11 + 0x54) + *(char *)(lVar11 + 0x55) * 2) * 5) *
                              4) + 0x40);
      goto LAB_14047aabc;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = s_RoInitialize_1405988a8._0_4_;
    if (cVar1 == '\0') goto LAB_14047aa8a;
  }
  pcVar15 = "RoInitialize";
LAB_14047aabc:
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)pcVar15;
  if (param_3 != '\0') {
    *(undefined4 *)(param_1 + 0x3c) = 0x76782b24;
    *(undefined4 *)(param_1 + 0x40) = 0x76782b24;
  }
  return;
}


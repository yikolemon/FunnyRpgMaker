/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140022bdc */

longlong FUN_140022bdc(byte *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int *piVar4;
  undefined4 *puVar5;
  longlong lVar6;
  uint *puVar7;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  ulonglong uStack_40;
  byte *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_1;
  cVar2 = FUN_1400170b4(param_1,&DAT_14013b5b8);
  lVar6 = 1;
  if (cVar2 != '\0') goto code_r0x000140022c32;
  cVar2 = FUN_1400170b4(param_1,"false");
  if (cVar2 == '\0') {
    puVar7 = &local_78;
    FUN_140006874(puVar7,param_1);
    if (0xf < uStack_60) {
      puVar7 = (uint *)CONCAT44(uStack_74,local_78);
    }
    FUN_140017bc5(&local_58,puVar7,local_68 + (longlong)puVar7,puVar7);
    local_58 = (byte *)CONCAT44(uStack_74,local_78);
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    local_48 = local_68;
    uStack_40 = uStack_60;
    local_68 = 0;
    uStack_60 = 0xf;
    local_78 = local_78 & 0xffffff00;
    FUN_1400017de(&local_78);
    pbVar3 = local_30;
    if (local_30 != (byte *)&local_58) {
      FUN_1400065bc(local_30);
      *(longlong *)(pbVar3 + 0x10) = local_48;
      *(ulonglong *)(pbVar3 + 0x18) = uStack_40;
      *(undefined4 *)pbVar3 = (undefined4)local_58;
      *(undefined4 *)(pbVar3 + 4) = local_58._4_4_;
      *(undefined4 *)(pbVar3 + 8) = uStack_50;
      *(undefined4 *)(pbVar3 + 0xc) = uStack_4c;
      local_48 = 0;
      uStack_40 = 0xf;
      local_58 = (byte *)((ulonglong)local_58 & 0xffffffffffffff00);
    }
    FUN_1400017de(&local_58);
    pbVar3 = local_30;
    if (*(longlong *)(local_30 + 0x10) == 1) {
      if (0xf < *(ulonglong *)(local_30 + 0x18)) {
        pbVar3 = *(byte **)local_30;
      }
      bVar1 = *pbVar3;
      if ((byte)(bVar1 - 0x31) < 9) {
        lVar6 = (ulonglong)bVar1 - 0x30;
        goto code_r0x000140022c32;
      }
      if (bVar1 < 0x66) {
        if (bVar1 == 0x2b) goto code_r0x000140022c32;
        if ((bVar1 == 0x2d) || (bVar1 == 0x30)) goto LAB_140022c2a;
      }
      else if (bVar1 < 0x74) {
        if ((bVar1 == 0x66) || (bVar1 == 0x6e)) goto LAB_140022c2a;
      }
      else if ((bVar1 == 0x79) || (bVar1 == 0x74)) goto code_r0x000140022c32;
      puVar5 = (undefined4 *)FUN_140113dd4();
      *puVar5 = 0x16;
    }
    else {
      cVar2 = FUN_1400170b4(local_30,&DAT_14013b5b8);
      if ((((cVar2 != '\0') || (cVar2 = FUN_14000d7b8(pbVar3,"on"), cVar2 != '\0')) ||
          (cVar2 = FUN_14000d7b8(pbVar3,&DAT_14016ef3d), cVar2 != '\0')) ||
         (cVar2 = FUN_14000d7b8(pbVar3,"enable"), cVar2 != '\0')) goto code_r0x000140022c32;
      cVar2 = FUN_1400170b4(pbVar3,"false");
      if (((cVar2 == '\0') && (cVar2 = FUN_14000d7b8(pbVar3,&DAT_14016fe00), cVar2 == '\0')) &&
         (cVar2 = FUN_14000d7b8(pbVar3,&DAT_14016f6b0), cVar2 == '\0')) {
        cVar2 = FUN_14000d7b8(pbVar3,"disable");
        lVar6 = -1;
        if (cVar2 == '\0') {
          local_58 = (byte *)0x0;
          if (0xf < *(ulonglong *)(pbVar3 + 0x18)) {
            pbVar3 = *(byte **)pbVar3;
          }
          lVar6 = FUN_14011b910(pbVar3,&local_58,0);
          pbVar3 = local_30;
          if (0xf < *(ulonglong *)(local_30 + 0x18)) {
            pbVar3 = *(byte **)local_30;
          }
          if ((local_58 != pbVar3 + *(longlong *)(local_30 + 0x10)) &&
             (piVar4 = (int *)FUN_140113dd4(), *piVar4 == 0)) {
            puVar5 = (undefined4 *)FUN_140113dd4();
            *puVar5 = 0x16;
          }
        }
        goto code_r0x000140022c32;
      }
    }
  }
LAB_140022c2a:
  lVar6 = -1;
code_r0x000140022c32:
  FUN_1400017de(local_30);
  return lVar6;
}


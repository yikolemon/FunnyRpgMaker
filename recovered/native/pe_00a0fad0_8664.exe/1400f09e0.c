/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400f09e0 */

void FUN_1400f09e0(ulonglong param_1,undefined8 param_2,char param_3)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  char *pcVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  ulonglong local_res8 [2];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 local_58 [48];
  
  puVar11 = (undefined4 *)FUN_1400da4c0(local_58);
  uVar4 = puVar11[1];
  uVar5 = puVar11[2];
  uVar6 = puVar11[3];
  uVar13 = *(undefined8 *)(puVar11 + 4);
  uVar7 = puVar11[7];
  uVar8 = puVar11[8];
  uVar9 = puVar11[9];
  uVar10 = puVar11[10];
  uStack_70 = (undefined4)*(undefined8 *)(puVar11 + 6);
  puVar1 = (undefined4 *)(param_1 + 0x48);
  *puVar1 = *puVar11;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  *(undefined4 *)(param_1 + 0x54) = uVar6;
  local_78 = (undefined4)uVar13;
  uStack_74 = (undefined4)((ulonglong)uVar13 >> 0x20);
  *(undefined4 *)(param_1 + 0x58) = local_78;
  *(undefined4 *)(param_1 + 0x5c) = uStack_74;
  *(undefined4 *)(param_1 + 0x60) = uStack_70;
  *(undefined4 *)(param_1 + 100) = uVar7;
  *(undefined4 *)(param_1 + 100) = uVar7;
  *(undefined4 *)(param_1 + 0x68) = uVar8;
  *(undefined4 *)(param_1 + 0x6c) = uVar9;
  *(undefined4 *)(param_1 + 0x70) = uVar10;
  lVar12 = FUN_1401174fc();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  local_res8[0] = param_1;
  uVar13 = FUN_140024b0d(*(undefined8 *)(lVar12 + 0x38),puVar1);
  *(undefined8 *)(param_1 + 0x10) = uVar13;
  lVar15 = 0x18;
  if (*(char *)(param_1 + 0x44) == '\0') {
    lVar15 = 0x20;
  }
  uVar13 = FUN_1400fb080(*(undefined8 *)(lVar15 + lVar12),puVar1);
  *(undefined8 *)(param_1 + 0x20) = uVar13;
  puVar16 = &DAT_1401728de;
  if (*(byte *)(lVar12 + 0x56) < 5) {
    puVar16 = *(undefined1 **)(lVar12 + 0x40);
  }
  uVar13 = FUN_1400fb080(puVar16,puVar1);
  *(undefined8 *)(param_1 + 0x28) = uVar13;
  puVar17 = &DAT_140174684;
  if (*(byte *)(lVar12 + 0x57) < 5) {
    puVar17 = *(undefined **)(lVar12 + 0x48);
  }
  uVar13 = FUN_1400fb080(puVar17,puVar1);
  *(undefined8 *)(param_1 + 0x30) = uVar13;
  local_res18[0] = **(undefined1 **)(lVar12 + 0x28);
  local_res8[0] = local_res8[0] & 0xffffffffffff0000;
  local_res20 = 0;
  FUN_1400da650(local_res8,local_res18,1,&local_res20,puVar1);
  *(undefined2 *)(param_1 + 0x18) = (undefined2)local_res8[0];
  local_res18[0] = **(undefined1 **)(lVar12 + 0x30);
  local_res8[0] = local_res8[0] & 0xffffffffffff0000;
  local_res20 = 0;
  FUN_1400da650(local_res8,local_res18,1,&local_res20,puVar1);
  *(undefined2 *)(param_1 + 0x1a) = (undefined2)local_res8[0];
  cVar2 = *(char *)(param_1 + 0x44);
  bVar3 = *(byte *)((0x51 - (ulonglong)(cVar2 != '\0')) + lVar12);
  *(int *)(param_1 + 0x38) = (int)(char)bVar3;
  if (0x7e < bVar3) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if ((((cVar2 == '\0') && ((uint)(int)*(char *)(lVar12 + 0x53) < 3)) &&
      ((uint)(int)*(char *)(lVar12 + 0x52) < 2)) && ((uint)(int)*(char *)(lVar12 + 0x56) < 5)) {
    *(undefined4 *)(param_1 + 0x3c) =
         *(undefined4 *)
          (
          "+v$x+v$xv$+xv+$xv$+x+$vx+$vx$v+x+$vx$+vx+v $+v $v $+v +$v $++$ v+$ v$ v++$ v$+ v+xv$+ v$v$ +v+ $v$ ++x$v+ $v$v ++ $v$ +v"
          + (uint)(((int)*(char *)(lVar12 + 0x56) +
                   ((int)*(char *)(lVar12 + 0x52) + *(char *)(lVar12 + 0x53) * 2) * 5) * 4));
LAB_1400f0bc4:
    if ((((uint)(int)*(char *)(lVar12 + 0x55) < 3) && ((uint)(int)*(char *)(lVar12 + 0x54) < 2)) &&
       ((uint)(int)*(char *)(lVar12 + 0x57) < 5)) {
      pcVar14 = "+v$x+v$xv$+xv+$xv$+x+$vx+$vx$v+x+$vx$+vx+v $+v $v $+v +$v $++$ v+$ v$ v++$ v$+ v+xv$+ v$v$ +v+ $v$ ++x$v+ $v$v ++ $v$ +v"
                + (uint)(((int)*(char *)(lVar12 + 0x57) +
                         ((int)*(char *)(lVar12 + 0x54) + *(char *)(lVar12 + 0x55) * 2) * 5) * 4);
      goto LAB_1400f0bf6;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = DAT_14017445c;
    if (cVar2 == '\0') goto LAB_1400f0bc4;
  }
  pcVar14 = "$+xv";
LAB_1400f0bf6:
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)pcVar14;
  if (param_3 != '\0') {
    *(undefined4 *)(param_1 + 0x3c) = 0x76782b24;
    *(undefined4 *)(param_1 + 0x40) = 0x76782b24;
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400faeb0 */

void FUN_1400faeb0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 local_58 [48];
  
  puVar10 = (undefined4 *)FUN_1400da4c0(local_58);
  uVar14 = *(undefined8 *)(puVar10 + 4);
  uVar9 = *(undefined8 *)(puVar10 + 6);
  uVar2 = puVar10[7];
  uVar3 = puVar10[8];
  uVar4 = puVar10[9];
  uVar5 = puVar10[10];
  uVar6 = puVar10[1];
  uVar7 = puVar10[2];
  uVar8 = puVar10[3];
  *(undefined4 *)(param_1 + 0x2c) = *puVar10;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 0x38) = uVar8;
  uStack_70 = (undefined4)uVar9;
  local_78 = (undefined4)uVar14;
  uStack_74 = (undefined4)((ulonglong)uVar14 >> 0x20);
  *(undefined4 *)(param_1 + 0x3c) = local_78;
  *(undefined4 *)(param_1 + 0x40) = uStack_74;
  *(undefined4 *)(param_1 + 0x44) = uStack_70;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  lVar11 = FUN_140108134();
  if (lVar11 != 0) {
    if (*(longlong *)(param_3 + 8) != lVar11) {
      if (*(longlong *)(param_3 + 8) != 0) {
        thunk_FUN_1401212e0();
      }
      *(undefined8 *)(param_3 + 8) = 0;
      lVar13 = -1;
      do {
        lVar12 = lVar13;
        lVar13 = lVar12 + 1;
      } while (*(char *)(lVar11 + 1 + lVar12) != '\0');
      lVar13 = _malloc_base(lVar12 + 2);
      if (lVar13 != 0) {
        FUN_140135ff0(lVar13,lVar11,lVar12 + 2);
      }
      *(longlong *)(param_3 + 8) = lVar13;
    }
    thunk_FUN_1401212e0(lVar11);
  }
  pcVar15 = ":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday";
  if (*(char **)(param_3 + 8) != (char *)0x0) {
    pcVar15 = *(char **)(param_3 + 8);
  }
  uVar14 = FUN_1400fb080(pcVar15,param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x10) = uVar14;
  lVar11 = FUN_14010813c();
  if (lVar11 != 0) {
    plVar1 = (longlong *)(param_3 + 0x18);
    if (*(longlong *)(param_3 + 0x18) == lVar11) {
      thunk_FUN_1401212e0(lVar11);
    }
    else {
      if (*(longlong *)(param_3 + 0x18) != 0) {
        thunk_FUN_1401212e0();
      }
      *plVar1 = 0;
      lVar13 = -1;
      do {
        lVar12 = lVar13;
        lVar13 = lVar12 + 1;
      } while (*(char *)(lVar11 + 1 + lVar12) != '\0');
      lVar13 = _malloc_base(lVar12 + 2);
      if (lVar13 == 0) {
        *plVar1 = 0;
        thunk_FUN_1401212e0(lVar11);
      }
      else {
        FUN_140135ff0(lVar13,lVar11,lVar12 + 2);
        *plVar1 = lVar13;
        thunk_FUN_1401212e0(lVar11);
      }
    }
  }
  pcVar15 = 
  ":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:Nov:November:Dec:December"
  ;
  if (*(char **)(param_3 + 0x18) != (char *)0x0) {
    pcVar15 = *(char **)(param_3 + 0x18);
  }
  uVar14 = FUN_1400fb080(pcVar15,param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x18) = uVar14;
  uVar14 = FUN_1400fb080(&DAT_140174eb8,param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x20) = uVar14;
  return;
}


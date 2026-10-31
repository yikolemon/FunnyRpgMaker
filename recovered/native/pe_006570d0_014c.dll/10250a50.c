/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10250a50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10250a50(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  short sVar3;
  wchar_t wVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined2 uVar13;
  undefined4 *puVar14;
  short *psVar15;
  int iVar16;
  int iVar17;
  short *psVar18;
  wchar_t *pwVar19;
  int *piVar20;
  wchar_t *pwVar21;
  undefined1 local_3c [44];
  int local_10;
  int local_c;
  int *local_8;
  
  local_c = param_1;
  puVar14 = (undefined4 *)FUN_1022bf80(local_3c);
  uVar6 = puVar14[1];
  uVar7 = puVar14[2];
  uVar8 = puVar14[3];
  uVar9 = puVar14[4];
  uVar10 = puVar14[5];
  uVar11 = puVar14[6];
  uVar12 = puVar14[7];
  uVar2 = *(undefined8 *)(puVar14 + 8);
  uVar5 = puVar14[10];
  *(undefined4 *)(param_1 + 0x18) = *puVar14;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 0x28) = uVar9;
  *(undefined4 *)(param_1 + 0x2c) = uVar10;
  *(undefined4 *)(param_1 + 0x30) = uVar11;
  *(undefined4 *)(param_1 + 0x34) = uVar12;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  psVar15 = (short *)FUN_1025c6a3();
  if (psVar15 != (short *)0x0) {
    psVar18 = *(short **)(param_3 + 0x14);
    if (psVar18 != psVar15) {
      if (psVar18 != (short *)0x0) {
        thunk_FUN_10274120(psVar18);
      }
      *(undefined4 *)(param_3 + 0x14) = 0;
      psVar18 = psVar15;
      do {
        sVar3 = *psVar18;
        psVar18 = psVar18 + 1;
      } while (sVar3 != 0);
      local_8 = (int *)(((int)psVar18 - (int)(psVar15 + 1) >> 1) * 2 + 2);
      iVar16 = FUN_1026faa0(local_8);
      if (iVar16 != 0) {
        FUN_1025b2d0(iVar16,psVar15,local_8);
      }
      *(int *)(param_3 + 0x14) = iVar16;
    }
    thunk_FUN_10274120(psVar15);
  }
  pwVar21 = L":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday"
  ;
  if (*(wchar_t **)(param_3 + 0x14) != (wchar_t *)0x0) {
    pwVar21 = *(wchar_t **)(param_3 + 0x14);
  }
  pwVar19 = pwVar21;
  do {
    wVar4 = *pwVar19;
    pwVar19 = pwVar19 + 1;
  } while (wVar4 != L'\0');
  iVar16 = ((int)pwVar19 - (int)(pwVar21 + 1) >> 1) + 1;
  iVar17 = FUN_1026d360(iVar16,2);
  if (iVar17 != 0) {
    FUN_1025b2d0(iVar17,pwVar21,iVar16 * 2);
    *(int *)(local_c + 8) = iVar17;
    psVar15 = (short *)FUN_1025c802();
    if (psVar15 == (short *)0x0) {
      piVar20 = (int *)(param_3 + 0x1c);
    }
    else {
      psVar18 = *(short **)(param_3 + 0x1c);
      piVar1 = (int *)(param_3 + 0x1c);
      piVar20 = piVar1;
      if (psVar18 != psVar15) {
        if (psVar18 != (short *)0x0) {
          local_8 = piVar1;
          thunk_FUN_10274120(psVar18);
        }
        local_8 = (int *)(param_3 + 0x1c);
        *piVar1 = 0;
        psVar18 = psVar15;
        do {
          sVar3 = *psVar18;
          psVar18 = psVar18 + 1;
        } while (sVar3 != 0);
        local_10 = ((int)psVar18 - (int)(psVar15 + 1) >> 1) * 2 + 2;
        iVar16 = FUN_1026faa0(local_10);
        if (iVar16 != 0) {
          FUN_1025b2d0(iVar16,psVar15,local_10);
          piVar20 = local_8;
        }
        *piVar1 = iVar16;
      }
      thunk_FUN_10274120(psVar15);
    }
    pwVar21 = 
    L":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:Nov:November:Dec:December"
    ;
    if ((wchar_t *)*piVar20 != (wchar_t *)0x0) {
      pwVar21 = (wchar_t *)*piVar20;
    }
    pwVar19 = pwVar21;
    do {
      wVar4 = *pwVar19;
      pwVar19 = pwVar19 + 1;
    } while (wVar4 != L'\0');
    iVar16 = ((int)pwVar19 - (int)(pwVar21 + 1) >> 1) + 1;
    iVar17 = FUN_1026d360(iVar16,2);
    if (iVar17 != 0) {
      FUN_1025b2d0(iVar17,pwVar21,iVar16 * 2);
      iVar16 = local_c;
      *(int *)(local_c + 0xc) = iVar17;
      puVar14 = (undefined4 *)FUN_1026d360(0xd,2);
      uVar13 = DAT_10359108;
      uVar7 = _UNK_103590fc;
      uVar6 = _UNK_103590f8;
      uVar5 = _UNK_103590f4;
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = _DAT_103590f0;
        puVar14[1] = uVar5;
        puVar14[2] = uVar6;
        puVar14[3] = uVar7;
        *(undefined8 *)(puVar14 + 4) = DAT_10359100;
        *(undefined4 **)(iVar16 + 0x10) = puVar14;
        *(undefined2 *)(puVar14 + 6) = uVar13;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_10228470();
    }
                    /* WARNING: Subroutine does not return */
    FUN_10228470();
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228470();
}


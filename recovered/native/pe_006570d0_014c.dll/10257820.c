/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10257820 */

void __thiscall FUN_10257820(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  int iVar13;
  undefined4 *puVar14;
  char *pcVar15;
  int iVar16;
  undefined8 *puVar17;
  char *pcVar18;
  int *piVar19;
  undefined1 local_3c [44];
  char *local_10;
  int local_c;
  int *local_8;
  
  local_c = param_1;
  puVar14 = (undefined4 *)FUN_1022bf80(local_3c);
  uVar5 = puVar14[1];
  uVar6 = puVar14[2];
  uVar7 = puVar14[3];
  uVar8 = puVar14[4];
  uVar9 = puVar14[5];
  uVar10 = puVar14[6];
  uVar11 = puVar14[7];
  uVar2 = *(undefined8 *)(puVar14 + 8);
  uVar4 = puVar14[10];
  *(undefined4 *)(param_1 + 0x18) = *puVar14;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 0x28) = uVar8;
  *(undefined4 *)(param_1 + 0x2c) = uVar9;
  *(undefined4 *)(param_1 + 0x30) = uVar10;
  *(undefined4 *)(param_1 + 0x34) = uVar11;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  pcVar15 = (char *)FUN_1025bf4d();
  if (pcVar15 != (char *)0x0) {
    pcVar18 = *(char **)(param_3 + 4);
    if (pcVar18 != pcVar15) {
      if (pcVar18 != (char *)0x0) {
        thunk_FUN_10274120(pcVar18);
      }
      *(undefined4 *)(param_3 + 4) = 0;
      pcVar18 = pcVar15;
      do {
        cVar3 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      } while (cVar3 != '\0');
      local_8 = (int *)(pcVar18 + (1 - (int)(pcVar15 + 1)));
      iVar16 = FUN_1026faa0(local_8);
      if (iVar16 != 0) {
        FUN_1025b2d0(iVar16,pcVar15,local_8);
      }
      *(int *)(param_3 + 4) = iVar16;
    }
    thunk_FUN_10274120(pcVar15);
  }
  pcVar15 = ":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday";
  if (*(char **)(param_3 + 4) != (char *)0x0) {
    pcVar15 = *(char **)(param_3 + 4);
  }
  pcVar18 = pcVar15;
  do {
    cVar3 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  } while (cVar3 != '\0');
  pcVar18 = pcVar18 + (1 - (int)(pcVar15 + 1));
  iVar16 = FUN_1026d360(pcVar18,1);
  if (iVar16 != 0) {
    if (pcVar18 != (char *)0x0) {
      FUN_1025b2d0(iVar16,pcVar15,pcVar18);
    }
    *(int *)(local_c + 8) = iVar16;
    pcVar15 = (char *)FUN_1025bf56();
    if (pcVar15 == (char *)0x0) {
      piVar19 = (int *)(param_3 + 0xc);
    }
    else {
      pcVar18 = *(char **)(param_3 + 0xc);
      piVar1 = (int *)(param_3 + 0xc);
      piVar19 = piVar1;
      if (pcVar18 != pcVar15) {
        if (pcVar18 != (char *)0x0) {
          local_8 = piVar1;
          thunk_FUN_10274120(pcVar18);
        }
        local_8 = (int *)(param_3 + 0xc);
        *piVar1 = 0;
        local_10 = pcVar15;
        do {
          cVar3 = *local_10;
          local_10 = local_10 + 1;
        } while (cVar3 != '\0');
        local_10 = local_10 + (1 - (int)(pcVar15 + 1));
        iVar16 = FUN_1026faa0(local_10);
        if (iVar16 != 0) {
          FUN_1025b2d0(iVar16,pcVar15,local_10);
          piVar19 = local_8;
        }
        *piVar1 = iVar16;
      }
      thunk_FUN_10274120(pcVar15);
    }
    pcVar15 = 
    ":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:Nov:November:Dec:December"
    ;
    if ((char *)*piVar19 != (char *)0x0) {
      pcVar15 = (char *)*piVar19;
    }
    pcVar18 = pcVar15;
    do {
      cVar3 = *pcVar18;
      pcVar18 = pcVar18 + 1;
    } while (cVar3 != '\0');
    pcVar18 = pcVar18 + (1 - (int)(pcVar15 + 1));
    iVar16 = FUN_1026d360(pcVar18,1);
    if (iVar16 != 0) {
      if (pcVar18 != (char *)0x0) {
        FUN_1025b2d0(iVar16,pcVar15,pcVar18);
      }
      iVar13 = local_c;
      *(int *)(local_c + 0xc) = iVar16;
      puVar17 = (undefined8 *)FUN_1026d360(0xd,1);
      uVar4 = DAT_10357888;
      if (puVar17 != (undefined8 *)0x0) {
        *puVar17 = DAT_10357880;
        *(undefined4 *)(puVar17 + 1) = uVar4;
        uVar12 = DAT_1035788c;
        *(undefined8 **)(iVar13 + 0x10) = puVar17;
        *(undefined1 *)((int)puVar17 + 0xc) = uVar12;
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


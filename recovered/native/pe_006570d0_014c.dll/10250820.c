/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10250820 */

void __thiscall FUN_10250820(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int iVar14;
  undefined4 uVar15;
  int *piVar16;
  char *pcVar17;
  undefined1 local_3c [44];
  char *local_10;
  int local_c;
  int *local_8;
  
  local_c = param_1;
  puVar12 = (undefined4 *)FUN_1022bf80(local_3c);
  uVar5 = puVar12[1];
  uVar6 = puVar12[2];
  uVar7 = puVar12[3];
  uVar8 = puVar12[4];
  uVar9 = puVar12[5];
  uVar10 = puVar12[6];
  uVar11 = puVar12[7];
  uVar3 = *(undefined8 *)(puVar12 + 8);
  uVar15 = puVar12[10];
  *(undefined4 *)(param_1 + 0x18) = *puVar12;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 0x28) = uVar8;
  *(undefined4 *)(param_1 + 0x2c) = uVar9;
  *(undefined4 *)(param_1 + 0x30) = uVar10;
  *(undefined4 *)(param_1 + 0x34) = uVar11;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar15;
  pcVar13 = (char *)FUN_1025bf4d();
  piVar1 = (int *)(param_3 + 4);
  if (pcVar13 != (char *)0x0) {
    pcVar17 = (char *)*piVar1;
    if (pcVar17 != pcVar13) {
      if (pcVar17 != (char *)0x0) {
        thunk_FUN_10274120(pcVar17);
      }
      *piVar1 = 0;
      pcVar17 = pcVar13;
      do {
        cVar4 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      } while (cVar4 != '\0');
      local_8 = (int *)(pcVar17 + (1 - (int)(pcVar13 + 1)));
      iVar14 = FUN_1026faa0(local_8);
      if (iVar14 != 0) {
        FUN_1025b2d0(iVar14,pcVar13,local_8);
      }
      *piVar1 = iVar14;
    }
    thunk_FUN_10274120(pcVar13);
  }
  iVar14 = local_c;
  pcVar13 = ":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday";
  if ((char *)*piVar1 != (char *)0x0) {
    pcVar13 = (char *)*piVar1;
  }
  uVar15 = FUN_10250990(pcVar13,local_c + 0x18);
  *(undefined4 *)(iVar14 + 8) = uVar15;
  pcVar13 = (char *)FUN_1025bf56();
  piVar1 = (int *)(param_3 + 0xc);
  piVar16 = piVar1;
  if (pcVar13 != (char *)0x0) {
    pcVar17 = (char *)*piVar1;
    if (pcVar17 != pcVar13) {
      if (pcVar17 != (char *)0x0) {
        local_8 = piVar1;
        thunk_FUN_10274120(pcVar17);
      }
      local_8 = (int *)(param_3 + 0xc);
      *piVar1 = 0;
      local_10 = pcVar13;
      do {
        cVar4 = *local_10;
        local_10 = local_10 + 1;
      } while (cVar4 != '\0');
      local_10 = local_10 + (1 - (int)(pcVar13 + 1));
      iVar14 = FUN_1026faa0(local_10);
      if (iVar14 != 0) {
        FUN_1025b2d0(iVar14,pcVar13,local_10);
        piVar16 = local_8;
      }
      *piVar1 = iVar14;
    }
    thunk_FUN_10274120(pcVar13);
  }
  iVar14 = local_c;
  pcVar13 = 
  ":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:Nov:November:Dec:December"
  ;
  if ((char *)*piVar16 != (char *)0x0) {
    pcVar13 = (char *)*piVar16;
  }
  iVar2 = local_c + 0x18;
  uVar15 = FUN_10250990(pcVar13,iVar2);
  *(undefined4 *)(iVar14 + 0xc) = uVar15;
  uVar15 = FUN_10250990(&DAT_10357880,iVar2);
  *(undefined4 *)(iVar14 + 0x10) = uVar15;
  return;
}


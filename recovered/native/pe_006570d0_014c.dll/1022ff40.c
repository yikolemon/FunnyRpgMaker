/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022ff40 */

undefined4 * __thiscall
FUN_1022ff40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  lconv *plVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  int *unaff_FS_OFFSET;
  undefined1 local_4c [44];
  undefined4 *local_20;
  lconv *local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_102889a5;
  local_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  param_1[1] = param_3;
  local_8 = 0;
  *param_1 = std::numpunct<char>::vftable;
  local_20 = param_1;
  plVar3 = _localeconv();
  local_1c = plVar3;
  FUN_1022bf80(local_4c,uVar2);
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  pcVar6 = "";
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_4 == '\0') {
    pcVar6 = plVar3->grouping;
  }
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + (1 - (int)(pcVar6 + 1));
  local_18 = param_1;
  local_14 = FUN_1026d360(pcVar5,1);
  if (local_14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10228470();
  }
  if (pcVar5 != (char *)0x0) {
    FUN_1025b2d0(local_14,pcVar6,pcVar5);
  }
  param_1[2] = local_14;
  pcVar6 = (char *)FUN_1026d360(6,1);
  if (pcVar6 != (char *)0x0) {
    *(undefined4 *)pcVar6 = s_false_10357a54._0_4_;
    *(undefined2 *)(pcVar6 + 4) = s_false_10357a54._4_2_;
    param_1[4] = pcVar6;
    puVar4 = (undefined4 *)FUN_1026d360(5,1);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = DAT_10357a30;
      *(undefined1 *)(puVar4 + 1) = DAT_10357a34;
      param_1[5] = puVar4;
      if (param_4 == '\0') {
        *(char *)(param_1 + 3) = *local_1c->decimal_point;
        cVar1 = *local_1c->thousands_sep;
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0x2e;
        cVar1 = ',';
      }
      *(char *)((int)param_1 + 0xd) = cVar1;
      *unaff_FS_OFFSET = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_10228470();
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228470();
}


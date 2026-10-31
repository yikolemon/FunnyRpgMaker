/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022bae0 */

undefined4 * FUN_1022bae0(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10288807;
  local_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  puVar3 = (undefined4 *)FUN_10228350(0x20,uVar2);
  local_8 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = 1;
    *puVar3 = std::locale::_Locimp::vftable;
    puVar3[2] = 0;
    puVar3[3] = *(undefined4 *)(param_1 + 0xc);
    puVar3[4] = *(undefined4 *)(param_1 + 0x10);
    *(undefined1 *)(puVar3 + 5) = *(undefined1 *)(param_1 + 0x14);
    pcVar6 = *(char **)(param_1 + 0x18);
    *(undefined1 *)(puVar3 + 7) = 0;
    puVar3[6] = 0;
    if ((pcVar6 != (char *)0x0) || (pcVar6 = (char *)(param_1 + 0x1c), pcVar6 != (char *)0x0)) {
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar4 = FUN_1026faa0(pcVar5 + (1 - (int)(pcVar6 + 1)));
      if (iVar4 != 0) {
        FUN_1025b2d0(iVar4,pcVar6,pcVar5 + (1 - (int)(pcVar6 + 1)));
      }
      puVar3[6] = iVar4;
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_1022de90(puVar3,param_1);
    *unaff_FS_OFFSET = local_10;
    return puVar3;
  }
  *unaff_FS_OFFSET = local_10;
  return (undefined4 *)0x0;
}


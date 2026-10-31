/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a489d */

undefined * FUN_1400a489d(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  longlong local_158;
  uint local_14c;
  char local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_188;
  lVar1 = param_1 + 0x28;
  FUN_1400ab942(lVar1,0);
  if (0 < *(int *)(param_1 + 8)) {
    iVar4 = 0;
    local_158 = param_1;
    do {
      local_168 = 0x100;
      FUN_1400a4a0d(local_158,iVar4,0,local_148);
      puVar3 = &DAT_140ececee;
      if (iVar4 == 0) {
        puVar3 = &DAT_140ececed;
      }
      FUN_1400792d0(lVar1,puVar3);
      if (local_148[0] != '\0') {
        pcVar6 = local_148;
        do {
          iVar2 = FUN_140076955(&local_14c,pcVar6);
          pcVar5 = pcVar6 + iVar2;
          if (local_14c == 0x2f) {
            FUN_1400792d0(lVar1,&DAT_140ecc3b1,0);
LAB_1400a499c:
            FUN_1400792d0(lVar1,pcVar6);
          }
          else {
            if (local_14c < 0x100 || param_2 != '\x01') goto LAB_1400a499c;
            if (0 < iVar2) {
              do {
                FUN_1400793b6(lVar1,"\\x%02x");
                pcVar6 = pcVar6 + 1;
              } while (pcVar6 < pcVar5);
            }
          }
          pcVar6 = pcVar5;
        } while (*pcVar5 != '\0');
      }
      iVar4 = iVar4 + 1;
      param_1 = local_158;
    } while (iVar4 < *(int *)(local_158 + 8));
  }
  puVar3 = &DAT_140f2a918;
  if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_1 + 0x30);
  }
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_188)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_188);
  }
  return puVar3;
}


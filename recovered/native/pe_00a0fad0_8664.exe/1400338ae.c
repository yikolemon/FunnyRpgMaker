/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400338ae */

void FUN_1400338ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_78 [64];
  undefined1 local_38 [24];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if ((*(char *)(param_1 + 0x48) == '\0') && (*(char *)(param_1 + 0x4a) == '\0')) {
    piVar2 = *(int **)(param_1 + 0x278);
    if (piVar2 != *(int **)(param_1 + 0x280)) {
      lVar3 = 0;
      do {
        lVar3 = lVar3 + (ulonglong)(*piVar2 != 1);
        piVar2 = piVar2 + 10;
      } while (piVar2 != *(int **)(param_1 + 0x280));
      if (lVar3 != 0) {
        FUN_140039be6(param_1,local_38,0);
        FUN_140039d64(local_78,param_1 + 8,local_38);
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_78,&DAT_14017a5c8);
      }
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x308);
  for (plVar4 = *(longlong **)(param_1 + 0x300); plVar4 != plVar1; plVar4 = plVar4 + 2) {
    if (*(int *)(*plVar4 + 0x324) != 0) {
      FUN_1400338ae();
    }
  }
  return;
}


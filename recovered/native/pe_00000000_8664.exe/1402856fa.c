/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402856fa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402856fa(longlong param_1,uint param_2,char param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = ram0x000140613b10 ^ (ulonglong)auStack_78;
  *(uint *)(param_1 + 0x10) = param_2 & 0x17;
  uVar2 = param_2 & 0x17 & *(uint *)(param_1 + 0x14);
  if (uVar2 != 0) {
    if (param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_14047ea80(0,0);
    }
    pcVar1 = "lets";
    if ((uVar2 & 2) == 0) {
      pcVar1 = "standard widgets";
    }
    pcVar3 = "ets/Drag and drop/Standard widgets";
    if ((uVar2 & 4) == 0) {
      pcVar3 = pcVar1;
    }
    local_48 = FUN_14028595d();
    local_50 = 1;
    FUN_1402857a8(local_40,pcVar3);
                    /* WARNING: Subroutine does not return */
    FUN_14047ea80(local_40,&DAT_1405b78c8);
  }
  if (ram0x000140613b10 == (local_18 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_18 ^ (ulonglong)auStack_78);
}


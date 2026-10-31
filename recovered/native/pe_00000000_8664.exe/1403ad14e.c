/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ad14e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001403ad1a3 : 2 cases all go to same destination
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403ad14e(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  uint param_5)

{
  byte bVar1;
  byte *pbVar2;
  char unaff_BL;
  undefined1 auStack_48 [56];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  if (param_4 < 4) {
    pbVar2 = (byte *)(ulonglong)param_5;
    bVar1 = (byte)param_5;
    *pbVar2 = *pbVar2 + bVar1;
    *pbVar2 = *pbVar2 + bVar1;
    *pbVar2 = *pbVar2 + bVar1;
    *pbVar2 = *pbVar2 + bVar1;
    *pbVar2 = *pbVar2 + bVar1;
    *pbVar2 = *pbVar2 + bVar1;
    *pbVar2 = *pbVar2 + bVar1;
    *pbVar2 = *pbVar2 + bVar1;
    *pbVar2 = *pbVar2 + bVar1;
    *pbVar2 = *pbVar2 & bVar1;
    *pbVar2 = *pbVar2 + bVar1;
    *pbVar2 = *pbVar2 + bVar1;
    *pbVar2 = *pbVar2 + unaff_BL;
    *pbVar2 = *pbVar2 + bVar1;
    *pbVar2 = *pbVar2 + bVar1;
    *pbVar2 = *pbVar2 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  }
  if (ram0x000140613b10 != (local_8 ^ (ulonglong)auStack_48)) {
    local_10 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_8 ^ (ulonglong)auStack_48);
  }
  return;
}


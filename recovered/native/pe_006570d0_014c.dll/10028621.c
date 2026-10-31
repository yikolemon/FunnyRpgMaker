/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10028621 */

undefined4
FUN_10028621(undefined4 param_1,undefined4 param_2,char param_3,uint param_4,char param_5,
            undefined4 param_6,undefined4 param_7,int param_8)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  int local_1c;
  undefined *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  if (((param_4 & 0x38000) == 0x8000) && (param_5 == '0')) {
    param_5 = ' ';
  }
  bVar3 = (param_4 >> 0xc & 1) == 0;
  puVar1 = &DAT_1033c3e1;
  if (bVar3) {
    puVar1 = &DAT_10336270;
  }
  local_18 = &DAT_1033c6d0;
  if (bVar3) {
    local_18 = &DAT_10338122;
  }
  if (param_3 != '\0') {
    local_18 = puVar1;
  }
  iVar2 = 4 - (uint)(param_8 == 0);
  local_1c = param_8;
  FUN_10028d44(param_1,param_2,&param_4,iVar2,iVar2,&local_1c);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


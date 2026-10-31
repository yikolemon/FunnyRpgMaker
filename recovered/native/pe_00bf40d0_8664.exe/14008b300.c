/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008b300 */

void FUN_14008b300(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38 [6];
  
  puVar2 = auStack_68;
  local_38[4] = DAT_14012ea80 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (*(char *)((longlong)param_4 + uVar3) != '\0');
  local_48 = param_1;
  FUN_1400025c6(local_38,param_4,uVar3);
  local_48 = (undefined8 *)CONCAT44(local_48._4_4_,param_2);
  local_40 = param_3;
  FUN_1400036f6(param_1,&local_48,local_38);
  if (0xf < local_38[3]) {
    if (DAT_14010b500 != '\0') {
      _guard_check_icall();
    }
    puVar2 = auStack_68;
    if ((0xfff < local_38[3] + 1) &&
       (puVar2 = auStack_68, 0x1f < (local_38[0] - *(longlong *)(local_38[0] - 8)) - 8)) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar2 = auStack_60;
    }
    *(undefined8 *)(puVar2 + -8) = 0x14008b406;
    FUN_1400863f0();
  }
  *param_1 = std::system_error::vftable;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar2 + -8) = &UNK_14008b420;
  FUN_140086440(*(ulonglong *)(puVar2 + 0x50) ^ (ulonglong)puVar2);
}


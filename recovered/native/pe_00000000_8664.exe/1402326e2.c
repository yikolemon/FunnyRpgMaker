/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402326e2 */

/* WARNING: Instruction at (ram,0x00014025e0aa) overlaps instruction at (ram,0x00014025e0a8)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1402326e2(longlong param_1,uint *param_2,uint *param_3,longlong param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auStack_88 [16];
  int local_78;
  uint *local_50;
  ulonglong local_48;
  
  local_78 = (int)param_2;
  local_48 = ram0x000140613b10 ^ (ulonglong)auStack_88;
  if (param_4 == 0) {
    param_4 = *(longlong *)(param_1 + 0xc0);
  }
  local_50 = param_3;
  if (param_4 != 0 && param_2 != param_3) {
    puVar1 = &switchD_140232757::switchdataD_1404c7700;
    uVar2 = *(int *)(param_4 + 8) - 1;
    if (uVar2 < 0x14) {
      switch(*(int *)(param_4 + 8)) {
      default:
        return puVar1;
      case 9:
        puVar1 = (uint *)FUN_1402133c2((ulonglong)(local_78 + 0x80) + 400);
        return puVar1;
      case 0xc:
        *(char *)(param_4 + 0x5f) = *(char *)(param_4 + 0x5f) - (char)param_4;
        break;
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x12:
      case 0x13:
      case 0x14:
        puVar1 = (uint *)FUN_1402133c2(param_2 + 0x7c);
        return puVar1;
      case 0x10:
        puVar1 = (uint *)FUN_140262fb0(param_2 + 0x8c);
        break;
      case 0x11:
        *(undefined4 *)
         ((longlong)&UINT_1404c76f8 +
         (longlong)(int)(&switchD_140232757::switchdataD_1404c7700)[uVar2]) = 0x404c7700;
        puVar1 = (uint *)FUN_14047ff60();
        return puVar1;
      }
      return puVar1;
    }
  }
  if (ram0x000140613b10 == (local_48 ^ (ulonglong)auStack_88)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_48 ^ (ulonglong)auStack_88);
}


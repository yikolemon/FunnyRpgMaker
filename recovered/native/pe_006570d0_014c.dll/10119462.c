/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10119462 */

void FUN_10119462(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = DAT_1039d74c;
  if ((char)param_1[0x15] == '\x01') {
    if ((*(byte *)(DAT_1039d74c + 0x27b5) & 8) != 0) {
      if (param_1[0x16] == 0) {
        puVar3 = &DAT_1033b7f1;
      }
      else {
        puVar3 = *(undefined **)(param_1[0x16] + 4);
      }
      FUN_100f99e6("[viewport] Destroy Platform Window %08X \'%s\'\n",*param_1,puVar3);
    }
    pcVar1 = *(code **)(iVar2 + 0xc8c);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1);
    }
    pcVar1 = *(code **)(iVar2 + 0xc3c);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1);
    }
    if (*param_1 != 0x11111111) {
      *(undefined1 *)(param_1 + 0x15) = 0;
    }
  }
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)((int)param_1 + 0x55) = 0;
  *(undefined1 *)((int)param_1 + 0x57) = 0;
  return;
}


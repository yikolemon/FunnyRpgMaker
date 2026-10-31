/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011e4d3 */

void FUN_18011e4d3(int *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined *puVar3;
  
  lVar2 = DAT_180419160;
  if ((char)param_1[0x1c] == '\x01') {
    if ((*(byte *)(DAT_180419160 + 0x2acd) & 8) != 0) {
      if (*(longlong *)(param_1 + 0x1e) == 0) {
        puVar3 = &DAT_18036b91b;
      }
      else {
        puVar3 = *(undefined **)(*(longlong *)(param_1 + 0x1e) + 8);
      }
      FUN_1800fdfea("[viewport] Destroy Platform Window %08X \'%s\'\n",*param_1,puVar3);
    }
    pcVar1 = *(code **)(lVar2 + 0xd58);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1);
    }
    pcVar1 = *(code **)(lVar2 + 0xcb8);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1);
    }
    if (*param_1 != 0x11111111) {
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined2 *)((longlong)param_1 + 0x71) = 0;
  *(undefined1 *)((longlong)param_1 + 0x73) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10101ab2 */

void __fastcall FUN_10101ab2(void *param_1)

{
  _memset(param_1,0xff,0x136);
  if (*(int *)((int)param_1 + 0x140) != 0) {
    *(undefined4 *)((int)param_1 + 0x13c) = 0;
    *(undefined4 *)((int)param_1 + 0x138) = 0;
    FUN_100fa2cb(*(int *)((int)param_1 + 0x140));
    *(undefined4 *)((int)param_1 + 0x140) = 0;
  }
  if (*(int *)((int)param_1 + 0x14c) != 0) {
    *(undefined4 *)((int)param_1 + 0x148) = 0;
    *(undefined4 *)((int)param_1 + 0x144) = 0;
    FUN_100fa2cb(*(int *)((int)param_1 + 0x14c));
    *(undefined4 *)((int)param_1 + 0x14c) = 0;
  }
  return;
}


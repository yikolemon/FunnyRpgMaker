/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00463144 */

void __fastcall FUN_00463144(int *param_1)

{
  if ((char)param_1[0xb63] != '\0') {
    *(undefined1 *)((int)param_1 + 0x2d8d) = 1;
    FUN_00462dda(param_1,param_1[0xb75],param_1[0xb76]);
    if ((char)param_1[0xb77] != '\0') {
      FUN_00463ff1(param_1,param_1 + 2,param_1 + 0xb6d,param_1[0xb6f],param_1[0xb70],'\x01');
    }
    *(undefined1 *)((int)param_1 + 0x2d8f) = 1;
    *(undefined2 *)(param_1 + 0xb63) = 0;
    *(undefined1 *)(param_1 + 0xb77) = 0;
  }
  return;
}


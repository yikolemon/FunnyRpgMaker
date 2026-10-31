/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c0208 */

void Unwind_1401c0208(undefined8 param_1,longlong param_2,undefined2 param_3,undefined1 param_4)

{
  uint *in_RAX;
  
  *in_RAX = (uint)*(byte *)(param_2 + 6);
  *(undefined2 *)(in_RAX + 1) = param_3;
  *(undefined1 *)((longlong)in_RAX + 6) = param_4;
  return;
}


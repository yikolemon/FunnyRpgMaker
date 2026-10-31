/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180187447 */

void FUN_180187447(undefined1 *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  
  puVar2 = &LAB_180187c2c;
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_1;
  }
  FUN_180186f86(1);
  cVar1 = FUN_180187ca0(2,puVar2);
  if (cVar1 != '\0') {
    return;
  }
  FUN_180187ca0(1,puVar2);
  return;
}


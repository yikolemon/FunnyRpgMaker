/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140379271 */

undefined8 FUN_140379271(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((*(char *)((longlong)param_1 + 0x23e) == '\x01') &&
     (*(short *)(param_1 + 0x1e) == *(short *)((longlong)param_1 + 0x7a))) {
    uVar2 = FUN_140310209("eftAlt",0,*param_1);
    cVar1 = FUN_14032c81f(uVar2,0x141);
    if (cVar1 != '\0') {
      return 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x23e) = 0;
  }
  return 0;
}


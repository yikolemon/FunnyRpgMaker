/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00485740 */

void __cdecl FUN_00485740(int *param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (((char)param_1[1] != '\0') && (pcVar4 = (char *)*param_1, pcVar4 != (char *)0x0)) {
    pcVar1 = pcVar4 + 1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    pcVar3 = (char *)FUN_004924d0((SIZE_T)(pcVar4 + (1 - (int)pcVar1)));
    if (pcVar3 != (char *)0x0) {
      FUN_004956b0(pcVar3,(int)(pcVar4 + (1 - (int)pcVar1)),*param_1);
      *param_2 = (int)pcVar3;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    thunk_FUN_00495f00((LPVOID)0x0);
    return;
  }
  *param_2 = *param_1;
  *(undefined1 *)(param_2 + 1) = 0;
  return;
}


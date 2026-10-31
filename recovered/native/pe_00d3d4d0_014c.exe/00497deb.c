/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00497deb */

void __fastcall FUN_00497deb(undefined4 *param_1)

{
  int iVar1;
  
  _memcpy_s(DAT_00521ecc,0x101,(void *)(*(int *)(*(int *)*param_1 + 0x48) + 0x18),0x101);
  _memcpy_s(DAT_00521ed0,0x100,(void *)(*(int *)(*(int *)*param_1 + 0x48) + 0x119),0x100);
  LOCK();
  iVar1 = *(int *)**(undefined4 **)param_1[1] + -1;
  *(int *)**(undefined4 **)param_1[1] = iVar1;
  UNLOCK();
  if ((iVar1 == 0) && ((undefined *)**(undefined4 **)param_1[1] != &DAT_0051b118)) {
    FUN_00495f00((LPVOID)**(undefined4 **)param_1[1]);
  }
  **(undefined4 **)param_1[1] = *(undefined4 *)(*(int *)*param_1 + 0x48);
  LOCK();
  **(int **)(*(int *)*param_1 + 0x48) = **(int **)(*(int *)*param_1 + 0x48) + 1;
  UNLOCK();
  return;
}


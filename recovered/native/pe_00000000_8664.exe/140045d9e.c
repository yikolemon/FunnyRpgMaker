/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140045d9e */

LPDROPTARGET FUN_140045d9e(LPDROPTARGET param_1,IDropTargetVtbl *param_2)

{
  HRESULT HVar1;
  
  param_1->lpVtbl = (IDropTargetVtbl *)FileDropTarget::vftable;
  param_1[1].lpVtbl = param_2;
  *(undefined8 *)((longlong)&param_1[2].lpVtbl + 4) = 0;
  *(undefined8 *)((longlong)&param_1[3].lpVtbl + 4) = 0;
  param_1[5].lpVtbl = (IDropTargetVtbl *)0x0;
  param_1[6].lpVtbl = (IDropTargetVtbl *)0x0;
  param_1[7].lpVtbl = (IDropTargetVtbl *)0x0;
  HVar1 = RegisterDragDrop((HWND)param_2,param_1);
  *(bool *)&param_1[2].lpVtbl = -1 < HVar1;
  return param_1;
}


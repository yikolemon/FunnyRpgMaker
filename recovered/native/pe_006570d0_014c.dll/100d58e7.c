/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d58e7 */

void FUN_100d58e7(void)

{
  undefined1 local_38 [24];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ddc10;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10001f66("SceneManager.push(Scene_Load)");
  local_14 = 0;
  FUN_10014730(local_38);
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return;
}


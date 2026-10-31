/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10191ffc */

void __fastcall FUN_10191ffc(uint *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  char *pcVar7;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  uVar4 = param_1[0xa4];
  uVar3 = *param_1;
  local_1c = 0;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  cVar1 = FUN_10190088(*(undefined4 *)(uVar4 + 0xd0),&local_2c);
  if (cVar1 == '\0') {
    bVar6 = (uVar3 & 2) == 0;
    uVar2 = 2;
    if (bVar6) {
      uVar2 = 0x1b;
    }
    uVar5 = 0xf5;
    if (!bVar6) {
      uVar5 = 2;
    }
    uVar2 = FUN_1018fd74(uVar5,uVar2,&local_2c);
    *(undefined4 *)(uVar4 + 0xd0) = uVar2;
    if ((*param_1 & 2) == 0) {
      uVar4 = (local_2c & 0xffff) + 0x7b;
      FUN_10190912(param_1,local_2c & 0xffff,local_2c._2_2_,0x7a,0x1b,
                   "..-         -XXXXXXX-    X    -           X           -XXXXXXX          -          XXXXXXX-     XX          - XX       XX ..-         -X.....X-   X.X   -          X.X          -X.....X          -          X.....X-    X..X         -X..X     X..X---         -XXX.XXX-  X...X  -         X...X         -X....X           -           X....X-    X..X         -X...X   X...XX           -  X.X  - X.....X -        X.....X        -X...X            -            X...X-    X..X         - X...X X...X XX          -  X.X  -X.......X-       X.......X       -X..X.X           -           X.X..X-    X..X         -  X...X...X  X.X         -  X.X  -XXXX.XXXX-       XXXX.XXXX       -X.X X.X          -          X.X X.X-    X..XXX       -   X.....X   X..X        -  X.X  -   X.X   -          X.X          -XX   X.X         -         X.X   XX-    X..X..XXX    -    X...X    X...X       -  X.X  -   X.X   -    XX    X.X    XX    -      X.X        -        X.X      -    X..X..X..XX  -     X.X     X....X      -  X.X  -   X.X   -   X.X    X.X    X.X   -       X.X       -       X.X       -    X..X..X..X.X -    X...X    X.....X     -  X.X  -   X.X   -  X..X    X.X    X..X  -        X.X      -      X.X        -XXX X..X..X..X..X-   X.....X   X......X    -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -         X.X   XX-XX   X.X         -X..XX........X..X-  X...X...X  X.......X   -  X.X  -   X.X   -X.....................X-          X.X X.X-X.X X.X          -X...X...........X- X...X X...X X........X  -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -           X.X..X-X..X.X           - X..............X-X...X   X...XX.........X -XXX.XXX-   X.X   -  X..X    X.X    X..X  -            X...X-X...X            -  X.............X-X..X     X..XX..........X-X.....X-   X.X   -   X.X    X.X    X.X   -           X....X-X....X           -  X.............X- XX       XX X......XXXXX-XXXXXXX-   X.X   -    XX    X.X    XX    -          X.....X-X.....X          -   X............X--------------X...X..X    ---------   X.X   -          X.X          -          XXXXXXX-XXXXXXX          -   X...." /* TRUNCATED STRING LITERAL */
                   ,0x2e);
      uVar3 = local_2c >> 0x10;
      pcVar7 = 
      "..-         -XXXXXXX-    X    -           X           -XXXXXXX          -          XXXXXXX-     XX          - XX       XX ..-         -X.....X-   X.X   -          X.X          -X.....X          -          X.....X-    X..X         -X..X     X..X---         -XXX.XXX-  X...X  -         X...X         -X....X           -           X....X-    X..X         -X...X   X...XX           -  X.X  - X.....X -        X.....X        -X...X            -            X...X-    X..X         - X...X X...X XX          -  X.X  -X.......X-       X.......X       -X..X.X           -           X.X..X-    X..X         -  X...X...X  X.X         -  X.X  -XXXX.XXXX-       XXXX.XXXX       -X.X X.X          -          X.X X.X-    X..XXX       -   X.....X   X..X        -  X.X  -   X.X   -          X.X          -XX   X.X         -         X.X   XX-    X..X..XXX    -    X...X    X...X       -  X.X  -   X.X   -    XX    X.X    XX    -      X.X        -        X.X      -    X..X..X..XX  -     X.X     X....X      -  X.X  -   X.X   -   X.X    X.X    X.X   -       X.X       -       X.X       -    X..X..X..X.X -    X...X    X.....X     -  X.X  -   X.X   -  X..X    X.X    X..X  -        X.X      -      X.X        -XXX X..X..X..X..X-   X.....X   X......X    -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -         X.X   XX-XX   X.X         -X..XX........X..X-  X...X...X  X.......X   -  X.X  -   X.X   -X.....................X-          X.X X.X-X.X X.X          -X...X...........X- X...X X...X X........X  -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -           X.X..X-X..X.X           - X..............X-X...X   X...XX.........X -XXX.XXX-   X.X   -  X..X    X.X    X..X  -            X...X-X...X            -  X.............X-X..X     X..XX..........X-X.....X-   X.X   -   X.X    X.X    X.X   -           X....X-X....X           -  X.............X- XX       XX X......XXXXX-XXXXXXX-   X.X   -    XX    X.X    XX    -          X.....X-X.....X          -   X............X--------------X...X..X    ---------   X.X   -          X.X          -          XXXXXXX-XXXXXXX          -   X...." /* TRUNCATED STRING LITERAL */
      ;
      uVar5 = 0x1b;
      uVar2 = 0x7a;
    }
    else {
      uVar3 = (uint)local_2c._2_2_;
      uVar4 = local_2c & 0xffff;
      pcVar7 = "XXXX";
      uVar5 = 2;
      uVar2 = 2;
    }
    FUN_10190912(param_1,uVar4,uVar3,uVar2,uVar5,pcVar7,0x58);
  }
  *(ulonglong *)(param_1 + 0x13) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x11) >> 0x20) *
                ((float)(local_2c >> 0x10) + DAT_102b89c0._4_4_),
                (float)*(undefined8 *)(param_1 + 0x11) *
                ((float)(local_2c & 0xffff) + (float)DAT_102b89c0));
  if (DAT_10388d00 == (local_14 ^ (uint)&local_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


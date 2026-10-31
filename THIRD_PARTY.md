# Third-party materials

- The original FunnyGamePlayer executable is user-supplied. Its recovered scripts and
  pseudocode retain their original material and are not claimed as newly authored code.
  No license grant for the original application is inferred by this reconstruction.
- The optional engine fixture uses [RPG Maker MV CoreScript](https://github.com/rpgtkoolmv/corescript),
  pinned at `182e31449707ba7e406db0485c44c2a9d11e2dcd`, under its MIT license.
  Sources are downloaded into ignored `tools/mv-corescript/`; generated fixture scripts,
  bundled libraries with their original notices, and the upstream `LICENSE` are retained
  in ignored `work/mv-fixture/`. No proprietary RPG Maker game assets are required.
- The fixture database, neutral texture, test scene, and preview control panel are
  newly authored test material, not recovered original assets or the original UI.
- `playwright-core` is used as a development/test dependency under Apache-2.0;
  it launches a caller-installed Chrome/Chromium. This project does not redistribute Chrome.
- The read-only Wolf database and Game.dat readers adapt format semantics from
  [Sinflower/WolfTL](https://github.com/Sinflower/WolfTL), reference revision
  `bfc38fc2735ab4f7f7ddbec8d57b7fef65f0712f`, Copyright (c) 2024 Sinflower,
  MIT License. Full permission/warranty notice: `licenses/WolfTL-MIT.txt`.
  The upstream source checkout is retained locally in ignored `tools/WolfTL/`.
- Local analysis tools Ghidra, Temurin JDK and REA remain under ignored `tools/`;
  their upstream licenses and notices continue to apply.
